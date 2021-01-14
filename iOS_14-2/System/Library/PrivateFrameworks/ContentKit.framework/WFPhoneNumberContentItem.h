/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFPhoneNumber;

@interface WFPhoneNumberContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) WFPhoneNumber * phoneNumber; 
+(id)typeDescription;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
-(WFPhoneNumber *)phoneNumber;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(BOOL)getListAltText:(/*^block*/id)arg1 ;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(id)richListTitle;
@end

