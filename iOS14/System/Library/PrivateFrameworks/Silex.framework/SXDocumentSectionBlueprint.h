/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDocumentSectionBlueprint.h>
@class NSArray;


@protocol SXDocumentSectionBlueprint <NSObject>
@property (nonatomic,readonly) NSArray * items; 
@required
-(NSArray *)items;

@end


@class NSArray, NSString;

@interface SXDocumentSectionBlueprint : NSObject <SXDocumentSectionBlueprint> {

	NSArray* _items;

}

@property (nonatomic,readonly) NSArray * items;                     //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)blueprintWithItems:(id)arg1 ;
-(NSArray *)items;
@end

