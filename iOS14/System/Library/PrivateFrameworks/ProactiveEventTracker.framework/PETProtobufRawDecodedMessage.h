/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableDictionary, NSDictionary;

@interface PETProtobufRawDecodedMessage : PBCodable {

	NSMutableDictionary* _decodedDict;
	NSDictionary* _nestedFields;

}
-(id)dictionaryRepresentation;
-(id)initWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 nestedFields:(id)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

