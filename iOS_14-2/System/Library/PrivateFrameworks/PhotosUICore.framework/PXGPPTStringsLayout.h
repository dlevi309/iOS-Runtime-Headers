/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGGridLayout.h>
#import <libobjc.A.dylib/PXGStringSource.h>

@class NSArray, NSDictionary, NSString;

@interface PXGPPTStringsLayout : PXGGridLayout <PXGStringSource> {

	NSArray* _strings;
	NSDictionary* _attributes;

}

@property (nonatomic,copy) NSArray * strings;                       //@synthesize strings=_strings - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;               //@synthesize attributes=_attributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)stringAttributesAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(NSArray *)strings;
-(long long)verticalAlignmentForStringAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)attributedStringForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)stringAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)init;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)attributes;
-(id)initWithStringCount:(unsigned long long)arg1 localeCodes:(id)arg2 ;
-(void)setStrings:(NSArray *)arg1 ;
@end

