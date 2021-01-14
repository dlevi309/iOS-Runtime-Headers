/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isPinned;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setPinned:(BOOL)arg1 ;
-(void)setLocalOnly:(BOOL)arg1 ;
-(BOOL)isLocalOnly;
-(id)initWithOptionsDictionary:(id)arg1 ;
-(NSDate *)expirationDate;
@end

