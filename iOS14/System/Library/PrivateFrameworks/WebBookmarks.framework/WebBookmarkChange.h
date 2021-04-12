/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@class WebBookmark, NSDictionary;

@interface WebBookmarkChange : NSObject {

	int _bookmarkID;
	int _parentID;
	long long _changeType;
	WebBookmark* _bookmark;
	unsigned long long _modifiedAttributes;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (assign,nonatomic) int bookmarkID;                                              //@synthesize bookmarkID=_bookmarkID - In the implementation block
@property (assign,nonatomic) int parentID;                                                //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,readonly) long long changeType;                                      //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) WebBookmark * bookmark;                                    //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) unsigned long long modifiedAttributes;                     //@synthesize modifiedAttributes=_modifiedAttributes - In the implementation block
+(id)bookmarkAddChangeWithBookmark:(id)arg1 ;
+(id)bookmarkModifyChangeWithBookmark:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(WebBookmark *)bookmark;
-(long long)changeType;
-(BOOL)attributesMarkedAsModify:(unsigned long long)arg1 ;
-(id)initWithBookmark:(id)arg1 bookmarkID:(int)arg2 parentID:(int)arg3 changeType:(long long)arg4 ;
-(int)bookmarkID;
-(void)_setModifiedAttributesIfSupported;
-(void)setBookmarkID:(int)arg1 ;
-(id)initWithBookmarkID:(int)arg1 parentID:(int)arg2 changeType:(long long)arg3 ;
-(void)applyModificationsToBookmark:(id)arg1 ;
-(unsigned long long)modifiedAttributes;
-(int)parentID;
-(void)setParentID:(int)arg1 ;
@end

