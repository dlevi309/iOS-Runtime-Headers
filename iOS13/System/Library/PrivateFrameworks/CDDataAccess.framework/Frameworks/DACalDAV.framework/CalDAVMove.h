/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/


@class NSString;

@interface CalDAVMove : NSObject {

	int _sourceCalendarID;
	int _itemID;
	int _changeID;
	NSString* _oldExternalID;
	long long _objectType;

}

@property (assign,nonatomic) int sourceCalendarID;                  //@synthesize sourceCalendarID=_sourceCalendarID - In the implementation block
@property (assign,nonatomic) int itemID;                            //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSString * oldExternalID;              //@synthesize oldExternalID=_oldExternalID - In the implementation block
@property (assign,nonatomic) int changeID;                          //@synthesize changeID=_changeID - In the implementation block
@property (assign,nonatomic) long long objectType;                  //@synthesize objectType=_objectType - In the implementation block
-(int)itemID;
-(long long)objectType;
-(void)setItemID:(int)arg1 ;
-(void)setObjectType:(long long)arg1 ;
-(int)changeID;
-(void)setChangeID:(int)arg1 ;
-(NSString *)oldExternalID;
-(id)initWithSourceCalendarID:(int)arg1 itemID:(int)arg2 oldExternalID:(id)arg3 changeID:(int)arg4 objectType:(long long)arg5 ;
-(int)sourceCalendarID;
-(void)setSourceCalendarID:(int)arg1 ;
-(void)setOldExternalID:(NSString *)arg1 ;
@end

