/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIFamilyMemberDelegate;
@class NSNumber, NSString, UIImage;

@interface VUIFamilyMember : NSObject {

	BOOL _sharingPurchases;
	NSNumber* _memberIdentifier;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _accountName;
	UIImage* _memberImage;
	id<VUIFamilyMemberDelegate> _delegate;

}

@property (nonatomic,retain) NSNumber * memberIdentifier;                              //@synthesize memberIdentifier=_memberIdentifier - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                     //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                      //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * accountName;                                   //@synthesize accountName=_accountName - In the implementation block
@property (assign,nonatomic) BOOL sharingPurchases;                                    //@synthesize sharingPurchases=_sharingPurchases - In the implementation block
@property (nonatomic,retain) UIImage * memberImage;                                    //@synthesize memberImage=_memberImage - In the implementation block
@property (assign,nonatomic,__weak) id<VUIFamilyMemberDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<VUIFamilyMemberDelegate>)delegate;
-(void)setDelegate:(id<VUIFamilyMemberDelegate>)arg1 ;
-(NSString *)accountName;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setSharingPurchases:(BOOL)arg1 ;
-(NSNumber *)memberIdentifier;
-(UIImage *)memberImage;
-(void)setMemberIdentifier:(NSNumber *)arg1 ;
-(BOOL)sharingPurchases;
-(void)setMemberImage:(UIImage *)arg1 ;
@end

