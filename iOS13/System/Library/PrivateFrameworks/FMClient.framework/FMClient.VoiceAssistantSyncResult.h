/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSString;

@interface FMClient.VoiceAssistantSyncResult : NSObject <NSSecureCoding> {

	 devices;
	 anchor;

}

@property (readonly,nonatomic) NSSet * devices; 
@property (readonly,nonatomic) NSString * anchor; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)devices;
-(NSString *)anchor;
-(id)initWithDevices:(id)arg1 anchor:(id)arg2 ;
@end

