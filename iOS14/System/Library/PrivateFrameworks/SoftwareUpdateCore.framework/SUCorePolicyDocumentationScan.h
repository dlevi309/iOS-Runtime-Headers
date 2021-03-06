/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface SUCorePolicyDocumentationScan : NSObject <NSSecureCoding, NSCopying> {

	BOOL _allowsCellular;
	BOOL _discretionary;
	BOOL _requiresPowerPluggedIn;
	BOOL _liveServerCatalogOnly;
	int _downloadTimeoutSecs;
	long long _specifiedFields;
	NSDictionary* _additionalServerParams;
	NSDictionary* _additionalOptions;

}

@property (assign) long long specifiedFields;                                    //@synthesize specifiedFields=_specifiedFields - In the implementation block
@property (assign,nonatomic) BOOL allowsCellular;                                //@synthesize allowsCellular=_allowsCellular - In the implementation block
@property (assign,nonatomic) BOOL discretionary;                                 //@synthesize discretionary=_discretionary - In the implementation block
@property (assign,nonatomic) BOOL requiresPowerPluggedIn;                        //@synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn - In the implementation block
@property (assign,nonatomic) int downloadTimeoutSecs;                            //@synthesize downloadTimeoutSecs=_downloadTimeoutSecs - In the implementation block
@property (assign,nonatomic) BOOL liveServerCatalogOnly;                         //@synthesize liveServerCatalogOnly=_liveServerCatalogOnly - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalServerParams;              //@synthesize additionalServerParams=_additionalServerParams - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalOptions;                   //@synthesize additionalOptions=_additionalOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDiscretionary:(BOOL)arg1 ;
-(id)init;
-(void)setRequiresPowerPluggedIn:(BOOL)arg1 ;
-(void)setLiveServerCatalogOnly:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)liveServerCatalogOnly;
-(id)summary;
-(BOOL)allowsCellular;
-(void)setAllowsCellular:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)additionalServerParams;
-(BOOL)discretionary;
-(BOOL)requiresPowerPluggedIn;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAdditionalServerParams:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalOptions;
-(void)setAdditionalOptions:(NSDictionary *)arg1 ;
-(long long)specifiedFields;
-(void)setSpecifiedFields:(long long)arg1 ;
-(void)backToDefaults;
-(int)downloadTimeoutSecs;
-(void)setDownloadTimeoutSecs:(int)arg1 ;
@end

