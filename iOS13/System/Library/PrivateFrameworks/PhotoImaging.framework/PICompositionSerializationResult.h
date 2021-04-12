/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)formatVersion;
-(void)setFormatVersion:(NSString *)arg1 ;
-(NSString *)formatIdentifier;
-(void)setFormatIdentifier:(NSString *)arg1 ;
@end

