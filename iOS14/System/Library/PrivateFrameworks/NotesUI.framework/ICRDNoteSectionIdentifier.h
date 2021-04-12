/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <libobjc.A.dylib/ICRDSectionIdentifier.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICRDNoteSectionIdentifier : NSObject <ICRDSectionIdentifier, NSCopying> {

	long long _sectionType;

}

@property (assign,nonatomic) long long sectionType;                           //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * expansionStateContext; 
+(id)sortDescriptors;
+(id)titles;
-(long long)sectionType;
-(unsigned long long)hash;
-(void)setSectionType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)expansionStateContext;
-(BOOL)isEqualToICRDNoteSectionIdentifier:(id)arg1 ;
-(id)initWithNoteSectionType:(long long)arg1 ;
@end

