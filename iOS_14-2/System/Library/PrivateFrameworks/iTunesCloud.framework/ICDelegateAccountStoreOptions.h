/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)singleWriterOptionsWithDatabasePath:(id)arg1 ;
+(id)defaultOptionsWithServiceName:(id)arg1 ;
+(id)defaultOptionsWithServiceEndpoint:(id)arg1 ;
-(NSString *)databasePath;
-(void)setDatabasePath:(NSString *)arg1 ;
-(void)setSingleWriter:(BOOL)arg1 ;
-(void)setXPCServiceName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSXPCListenerEndpoint *)XPCEndpoint;
-(NSString *)XPCServiceName;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isSingleWriter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setXPCEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

