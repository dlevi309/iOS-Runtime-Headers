/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAGLShowGlance : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * bundleId; 
+(id)showGlance;
+(id)showGlanceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setBundleId:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(NSString *)bundleId;
@end

