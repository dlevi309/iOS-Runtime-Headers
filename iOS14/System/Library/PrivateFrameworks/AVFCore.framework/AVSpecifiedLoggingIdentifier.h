/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVLoggingIdentifier.h>

@class NSString, AVSpecifiedLoggingIdentifierInternal;

@interface AVSpecifiedLoggingIdentifier : NSObject <AVLoggingIdentifier> {

	AVSpecifiedLoggingIdentifierInternal* _specifiedLoggingIdentifier;

}

@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSpecifiedName:(id)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(id)makeDerivedIdentifier;
-(void)dealloc;
@end

