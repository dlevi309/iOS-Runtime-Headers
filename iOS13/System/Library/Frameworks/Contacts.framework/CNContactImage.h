/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


#import <Contacts/Contacts-Structs.h>
@class NSString, NSData, NSDate;

@interface CNContactImage : NSObject {

	NSString* _identifier;
	NSData* _imageData;
	NSDate* _lastUsedDate;
	long long _source;
	NSString* _sourceIdentifier;
	NSString* _variant;
	CGRect _cropRect;

}

@property (nonatomic,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                     //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) NSDate * lastUsedDate;                  //@synthesize lastUsedDate=_lastUsedDate - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                        //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) long long source;                         //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString * sourceIdentifier;              //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * variant;                       //@synthesize variant=_variant - In the implementation block
-(void)setSource:(long long)arg1 ;
-(NSString *)identifier;
-(long long)source;
-(NSString *)variant;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)sourceIdentifier;
-(NSDate *)lastUsedDate;
-(NSData *)imageData;
-(CGRect)cropRect;
-(void)setVariant:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 imageData:(id)arg2 cropRect:(CGRect)arg3 lastUsedDate:(id)arg4 ;
-(id)initWithImageData:(id)arg1 cropRect:(CGRect)arg2 lastUsedDate:(id)arg3 ;
-(id)copyWithNewImageData:(id)arg1 ;
@end

