/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)devices;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)anchor;
-(id)initWithDevices:(id)arg1 anchor:(id)arg2 ;
@end

