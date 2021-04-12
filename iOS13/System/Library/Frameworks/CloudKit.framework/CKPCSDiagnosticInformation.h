/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary, NSMutableArray;

@interface CKPCSDiagnosticInformation : NSObject <NSSecureCoding> {

	NSString* _identityInfo;
	NSString* _serviceIdentityInfo;
	NSMutableDictionary* _pcsInfoByZoneID;
	NSMutableArray* _notFoundZoneIDs;

}

@property (nonatomic,retain) NSString * identityInfo;                            //@synthesize identityInfo=_identityInfo - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentityInfo;                     //@synthesize serviceIdentityInfo=_serviceIdentityInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pcsInfoByZoneID;              //@synthesize pcsInfoByZoneID=_pcsInfoByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableArray * notFoundZoneIDs;                   //@synthesize notFoundZoneIDs=_notFoundZoneIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identityInfo;
-(NSString *)serviceIdentityInfo;
-(NSMutableDictionary *)pcsInfoByZoneID;
-(NSMutableArray *)notFoundZoneIDs;
-(void)setIdentityInfo:(NSString *)arg1 ;
-(void)setServiceIdentityInfo:(NSString *)arg1 ;
-(void)setPcsInfoByZoneID:(NSMutableDictionary *)arg1 ;
-(void)setNotFoundZoneIDs:(NSMutableArray *)arg1 ;
@end

