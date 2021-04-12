/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASDJobManagerOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldFilterExternalOriginatedDownloads;
	BOOL _shouldReportDownloadProgress;
	NSString* _persistenceIdentifier;

}

@property (assign,nonatomic) BOOL shouldReportDownloadProgress;                         //@synthesize shouldReportDownloadProgress=_shouldReportDownloadProgress - In the implementation block
@property (nonatomic,copy) NSString * persistenceIdentifier;                            //@synthesize persistenceIdentifier=_persistenceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldFilterExternalOriginatedDownloads;              //@synthesize shouldFilterExternalOriginatedDownloads=_shouldFilterExternalOriginatedDownloads - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)persistenceIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setShouldReportDownloadProgress:(BOOL)arg1 ;
-(void)setPersistenceIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldFilterExternalOriginatedDownloads;
-(void)setShouldFilterExternalOriginatedDownloads:(BOOL)arg1 ;
-(BOOL)shouldReportDownloadProgress;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

