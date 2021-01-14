/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@interface REBluetoothDeviceRelevanceProvider : RERelevanceProvider {

	BOOL _connectedToCar;
	BOOL _connectedToSpeaker;

}

@property (nonatomic,readonly) BOOL connectedToCar;                  //@synthesize connectedToCar=_connectedToCar - In the implementation block
@property (nonatomic,readonly) BOOL connectedToSpeaker;              //@synthesize connectedToSpeaker=_connectedToSpeaker - In the implementation block
+(id)relevanceSimulatorID;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)connectedToCar;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(id)initWithConnectionToCar:(BOOL)arg1 connectionToSpeaker:(BOOL)arg2 ;
-(BOOL)connectedToSpeaker;
@end

