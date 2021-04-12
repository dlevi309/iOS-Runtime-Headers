/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSString, NSURL;

@interface STMediaChannel : STSiriModelObject {

	NSString* _callSign;
	NSString* _channelIdentifier;
	NSString* _name;
	NSURL* _streamUrl;

}

@property (nonatomic,copy) NSString * callSign;                       //@synthesize callSign=_callSign - In the implementation block
@property (nonatomic,copy) NSString * channelIdentifier;              //@synthesize channelIdentifier=_channelIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSURL * streamUrl;                       //@synthesize streamUrl=_streamUrl - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)channelIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setChannelIdentifier:(NSString *)arg1 ;
-(NSString *)callSign;
-(NSString *)name;
-(void)setCallSign:(NSString *)arg1 ;
-(NSURL *)streamUrl;
-(void)setStreamUrl:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

