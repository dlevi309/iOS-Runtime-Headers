/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSDate;

@interface _UIPasteboardOptions : NSObject {

	BOOL _pinned;
	BOOL _localOnly;
	NSDate* _expirationDate;

}

@property (assign,getter=isPinned,nonatomic) BOOL pinned;                    //@synthesize pinned=_pinned - In the implementation block
@property (assign,getter=isLocalOnly,nonatomic) BOOL localOnly;              //@synthesize localOnly=_localOnly - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
+(id)optionsWithDictionary:(id)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(BOOL)isPinned;
-(void)setPinned:(BOOL)arg1 ;
-(id)initWithOptionsDictionary:(id)arg1 ;
-(BOOL)isLocalOnly;
-(void)setLocalOnly:(BOOL)arg1 ;
@end

