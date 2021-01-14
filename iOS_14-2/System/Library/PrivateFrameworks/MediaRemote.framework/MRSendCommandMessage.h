/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSDictionary, NSDate, MRPlayerPath;

@interface MRSendCommandMessage : MRProtocolMessage {

	NSDictionary* _options;
	NSDate* _serializationDate;

}

@property (nonatomic,readonly) unsigned command; 
@property (nonatomic,readonly) NSDictionary * options; 
@property (nonatomic,readonly) NSDate * serializationDate;              //@synthesize serializationDate=_serializationDate - In the implementation block
@property (nonatomic,readonly) MRPlayerPath * playerPath; 
@property (nonatomic,readonly) unsigned appOptions; 
-(id)initWithCommand:(unsigned)arg1 options:(id)arg2 playerPath:(id)arg3 ;
-(NSDictionary *)options;
-(unsigned)appOptions;
-(NSDate *)serializationDate;
-(MRPlayerPath *)playerPath;
-(unsigned long long)type;
-(unsigned)command;
@end

