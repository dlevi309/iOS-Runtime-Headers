/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSXPCListenerEndpoint;

@interface ICDelegateAccountStoreOptions : NSObject <NSCopying, NSSecureCoding> {

	NSString* _databasePath;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSString* _serviceName;
	BOOL _singleWriter;

}

@property (nonatomic,copy) NSString * databasePath;                                //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,getter=isSingleWriter,nonatomic) BOOL singleWriter;              //@synthesize singleWriter=_singleWriter - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * XPCEndpoint;                  //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,copy) NSString * XPCServiceName;                              //@synthesize serviceName=_serviceName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultOptionsWithServiceEndpoint:(id)arg1 ;
+(id)defaultOptionsWithServiceName:(id)arg1 ;
+(id)singleWriterOptionsWithDatabasePath:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)databasePath;
-(void)setDatabasePath:(NSString *)arg1 ;
-(NSString *)XPCServiceName;
-(BOOL)isSingleWriter;
-(void)setSingleWriter:(BOOL)arg1 ;
-(NSXPCListenerEndpoint *)XPCEndpoint;
-(void)setXPCEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setXPCServiceName:(NSString *)arg1 ;
@end

