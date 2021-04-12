/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/PQLValuable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKDPCSData : NSObject <PQLValuable, NSSecureCoding, NSCopying> {

	OpaquePCSShareProtectionRef _pcs;
	NSString* _etag;
	NSData* _pcsData;
	NSString* _pcsKeyID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * pcsKeyID;                          //@synthesize pcsKeyID=_pcsKeyID - In the implementation block
@property (nonatomic,readonly) id<NSSecureCoding> itemID; 
@property (assign,nonatomic) OpaquePCSShareProtectionRef pcs;              //@synthesize pcs=_pcs - In the implementation block
@property (nonatomic,copy) NSString * etag;                                //@synthesize etag=_etag - In the implementation block
@property (nonatomic,copy) NSData * pcsData;                               //@synthesize pcsData=_pcsData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newFromSqliteStatement:(sqlite3_stmtRef)arg1 atIndex:(int)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)etag;
-(id<NSSecureCoding>)itemID;
-(void)setEtag:(NSString *)arg1 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(id)CKPropertiesDescription;
-(NSString *)pcsKeyID;
-(void)setPcsKeyID:(NSString *)arg1 ;
-(OpaquePCSShareProtectionRef)pcs;
-(NSData *)pcsData;
-(void)setPcsData:(NSData *)arg1 ;
-(void)setPcs:(OpaquePCSShareProtectionRef)arg1 ;
-(BOOL)shouldEncodePCSData;
-(id)initWithPCSData:(id)arg1 ;
@end

