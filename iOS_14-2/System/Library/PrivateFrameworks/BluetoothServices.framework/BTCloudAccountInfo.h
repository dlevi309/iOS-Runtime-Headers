/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BTCloudAccountInfo : NSObject <NSSecureCoding> {

	BOOL _isSignedIn;
	BOOL _manateeAvailable;
	NSString* _loginID;

}

@property (assign,nonatomic) BOOL isSignedIn;                    //@synthesize isSignedIn=_isSignedIn - In the implementation block
@property (assign,nonatomic) BOOL manateeAvailable;              //@synthesize manateeAvailable=_manateeAvailable - In the implementation block
@property (nonatomic,retain) NSString * loginID;                 //@synthesize loginID=_loginID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)loginID;
-(BOOL)isSignedIn;
-(void)setLoginID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(BOOL)manateeAvailable;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsSignedIn:(BOOL)arg1 ;
-(void)setManateeAvailable:(BOOL)arg1 ;
@end

