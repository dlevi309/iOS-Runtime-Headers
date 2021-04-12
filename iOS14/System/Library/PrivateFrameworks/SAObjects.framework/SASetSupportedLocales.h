/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASetSupportedLocales : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * locales; 
+(id)setSupportedLocales;
+(id)setSupportedLocalesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)locales;
-(void)setLocales:(NSArray *)arg1 ;
@end

