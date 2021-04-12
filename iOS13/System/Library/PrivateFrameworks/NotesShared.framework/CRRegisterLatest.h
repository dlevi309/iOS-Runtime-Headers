/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <ReminderKit/CRRegister.h>

@protocol CRDataType;
@class CRTimestamp;

@interface CRRegisterLatest : CRRegister {

	id<CRDataType> _contents;
	CRTimestamp* _timestamp;

}

@property (nonatomic,retain) CRTimestamp * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(id)description;
-(id)contents;
-(CRTimestamp *)timestamp;
-(void)setTimestamp:(CRTimestamp *)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)setDocument:(id)arg1 ;
-(void)_setContents:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(id)initWithContents:(id)arg1 timestamp:(id)arg2 document:(id)arg3 ;
-(void)encodeIntoProtobufRegisterLatest:(RegisterLatest*)arg1 coder:(id)arg2 ;
-(id)initWithProtobufRegisterLatest:(const RegisterLatest*)arg1 decoder:(id)arg2 ;
-(id)initWithContents:(id)arg1 document:(id)arg2 ;
-(void)mergeWithRegisterLatest:(id)arg1 ;
-(BOOL)isEqualContents:(id)arg1 ;
@end

