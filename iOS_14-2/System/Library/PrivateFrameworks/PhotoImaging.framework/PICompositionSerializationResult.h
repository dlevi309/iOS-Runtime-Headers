/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


@class NSData, NSString;

@interface PICompositionSerializationResult : NSObject {

	NSData* _data;
	NSString* _formatIdentifier;
	NSString* _formatVersion;

}

@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * formatIdentifier;              //@synthesize formatIdentifier=_formatIdentifier - In the implementation block
@property (nonatomic,retain) NSString * formatVersion;                 //@synthesize formatVersion=_formatVersion - In the implementation block
-(void)setFormatVersion:(NSString *)arg1 ;
-(NSString *)formatVersion;
-(NSString *)formatIdentifier;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(void)setFormatIdentifier:(NSString *)arg1 ;
@end

