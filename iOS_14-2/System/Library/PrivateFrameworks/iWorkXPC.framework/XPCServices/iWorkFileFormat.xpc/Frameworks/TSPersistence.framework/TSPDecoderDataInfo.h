/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPDecoderDataInfo.h>
@class TSPDigest, NSString, TSPDataMetadata;


@protocol TSPDecoderDataInfo <NSObject>
@property (nonatomic,readonly) TSPDigest * digest; 
@property (nonatomic,readonly) NSString * preferredFilename; 
@property (nonatomic,readonly) NSString * documentResourceLocator; 
@property (nonatomic,readonly) NSString * externalFilePath; 
@property (nonatomic,readonly) TSPDataMetadata * dataMetadata; 
@property (nonatomic,readonly) long long identifier; 
@required
-(NSString *)preferredFilename;
-(long long)identifier;
-(TSPDigest *)digest;
-(NSString *)externalFilePath;
-(NSString *)documentResourceLocator;
-(TSPDataMetadata *)dataMetadata;

@end


@class TSPDigest, NSString, TSPDataMetadata;

@interface TSPDecoderDataInfo : NSObject <TSPDecoderDataInfo> {

	TSPDigest* _digest;
	NSString* _preferredFilename;
	NSString* _externalFilePath;
	NSString* _documentResourceLocator;
	TSPDataMetadata* _dataMetadata;
	long long _identifier;

}

@property (nonatomic,retain) TSPDataMetadata * dataMetadata;                    //@synthesize dataMetadata=_dataMetadata - In the implementation block
@property (nonatomic,readonly) TSPDigest * digest;                              //@synthesize digest=_digest - In the implementation block
@property (nonatomic,readonly) NSString * preferredFilename;                    //@synthesize preferredFilename=_preferredFilename - In the implementation block
@property (nonatomic,readonly) NSString * documentResourceLocator;              //@synthesize documentResourceLocator=_documentResourceLocator - In the implementation block
@property (nonatomic,readonly) NSString * externalFilePath;                     //@synthesize externalFilePath=_externalFilePath - In the implementation block
@property (nonatomic,readonly) long long identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithMessage:(const DataInfo*)arg1 ;
-(NSString *)preferredFilename;
-(long long)identifier;
-(TSPDigest *)digest;
-(NSString *)externalFilePath;
-(NSString *)documentResourceLocator;
-(TSPDataMetadata *)dataMetadata;
-(void)setDataMetadata:(TSPDataMetadata *)arg1 ;
-(id)initWithIdentifier:(long long)arg1 digest:(id)arg2 preferredFilename:(id)arg3 documentResourceLocator:(id)arg4 externalFilePath:(id)arg5 ;
@end

