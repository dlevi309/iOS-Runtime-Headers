/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)aceObjectWithDictionary:(id)arg1 ;
-(Class)classWithClassName:(id)arg1 group:(id)arg2 ;
-(void)registerGroupAcronym:(id)arg1 forGroupWithIdentifier:(id)arg2 ;
@end

