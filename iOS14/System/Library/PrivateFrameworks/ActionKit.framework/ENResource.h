/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSData, NSString, NSDictionary;

@interface ENResource : NSObject {

	NSData* _data;
	NSString* _mimeType;
	NSString* _filename;
	NSString* _sourceUrl;
	NSData* _dataHash;
	NSDictionary* _edamAttributes;
	NSString* _guid;

}

@property (nonatomic,copy) NSString * sourceUrl;                         //@synthesize sourceUrl=_sourceUrl - In the implementation block
@property (nonatomic,retain) NSData * dataHash;                          //@synthesize dataHash=_dataHash - In the implementation block
@property (nonatomic,retain) NSDictionary * edamAttributes;              //@synthesize edamAttributes=_edamAttributes - In the implementation block
@property (nonatomic,copy) NSString * guid;                              //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * mimeType;                          //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy) NSString * filename;                          //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) NSString * mediaTag; 
+(id)resourceWithServiceResource:(id)arg1 ;
-(NSString *)mimeType;
-(NSString *)guid;
-(NSString *)filename;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSString *)sourceUrl;
-(void)setSourceUrl:(NSString *)arg1 ;
-(NSData *)dataHash;
-(void)setFilename:(NSString *)arg1 ;
-(NSData *)data;
-(void)setGuid:(NSString *)arg1 ;
-(NSDictionary *)edamAttributes;
-(void)setEdamAttributes:(NSDictionary *)arg1 ;
-(id)initWithData:(id)arg1 mimeType:(id)arg2 filename:(id)arg3 ;
-(id)initWithData:(id)arg1 mimeType:(id)arg2 ;
-(id)EDAMResource;
-(NSString *)mediaTag;
-(void)setDataHash:(NSData *)arg1 ;
@end

