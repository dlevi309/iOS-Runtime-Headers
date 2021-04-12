/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(id)contentTypeParameterWithName:(id)arg1 ;
-(void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2 ;
-(id)allContentTypeParameterNames;
-(NSString *)contentId;
-(NSString *)contentLocation;
-(void)setContentId:(NSString *)arg1 ;
-(void)setContentLocation:(NSString *)arg1 ;
@end

