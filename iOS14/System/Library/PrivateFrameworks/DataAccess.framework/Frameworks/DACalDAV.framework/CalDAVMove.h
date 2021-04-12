/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
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
-(void)setItemID:(int)arg1 ;
-(long long)objectType;
-(id)initWithSourceCalendarID:(int)arg1 itemID:(int)arg2 oldExternalID:(id)arg3 changeID:(int)arg4 objectType:(long long)arg5 ;
-(void)setObjectType:(long long)arg1 ;
-(int)itemID;
-(int)sourceCalendarID;
-(void)setChangeID:(int)arg1 ;
-(void)setSourceCalendarID:(int)arg1 ;
-(void)setOldExternalID:(NSString *)arg1 ;
-(NSString *)oldExternalID;
-(int)changeID;
@end

