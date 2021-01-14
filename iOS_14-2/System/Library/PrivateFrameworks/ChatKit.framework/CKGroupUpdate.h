/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSString;

@interface CKGroupUpdate : NSObject {

	unsigned long long _groupUpdateType;
	NSString* _handleID;

}

@property (assign,nonatomic) unsigned long long groupUpdateType;              //@synthesize groupUpdateType=_groupUpdateType - In the implementation block
@property (nonatomic,retain) NSString * handleID;                             //@synthesize handleID=_handleID - In the implementation block
-(NSString *)handleID;
-(id)initWithType:(unsigned long long)arg1 handleID:(id)arg2 ;
-(unsigned long long)groupUpdateType;
-(void)setGroupUpdateType:(unsigned long long)arg1 ;
-(id)description;
-(void)setHandleID:(NSString *)arg1 ;
@end

