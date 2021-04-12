/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <libobjc.A.dylib/AceContext.h>

@class NSString;

@interface BasicAceContext : NSObject <AceContext>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBasicAceContext;
-(Class)classWithClassName:(id)arg1 group:(id)arg2 ;
-(void)registerGroupAcronym:(id)arg1 forGroupWithIdentifier:(id)arg2 ;
-(id)aceObjectWithDictionary:(id)arg1 ;
@end

