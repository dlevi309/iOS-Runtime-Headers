/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/


@class NSString, NSMutableDictionary, NSData;

@interface CTMessagePart : NSObject {

	NSString* _contentType;
	NSMutableDictionary* _contentTypeParams;
	NSString* _contentId;
	NSString* _contentLocation;
	NSData* _data;

}

@property (nonatomic,copy) NSString * contentType;                  //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy) NSString * contentId;                    //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,copy) NSString * contentLocation;              //@synthesize contentLocation=_contentLocation - In the implementation block
@property (nonatomic,copy) NSData * data;                           //@synthesize data=_data - In the implementation block
-(NSString *)contentId;
-(void)setContentId:(NSString *)arg1 ;
-(NSString *)contentLocation;
-(void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2 ;
-(id)allContentTypeParameterNames;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(void)setContentLocation:(NSString *)arg1 ;
-(id)contentTypeParameterWithName:(id)arg1 ;
-(NSString *)contentType;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(void)setContentType:(NSString *)arg1 ;
@end

