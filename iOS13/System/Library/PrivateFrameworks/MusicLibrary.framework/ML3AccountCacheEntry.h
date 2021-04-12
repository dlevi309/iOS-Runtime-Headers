/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class NSString;

@interface ML3AccountCacheEntry : NSObject {

	NSString* _appleID;
	NSString* _altDSID;

}

@property (nonatomic,retain) NSString * appleID;              //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) NSString * altDSID;              //@synthesize altDSID=_altDSID - In the implementation block
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(id)initWithAppleID:(id)arg1 altDSID:(id)arg2 ;
@end

