/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface ENRegionServerAgencyExposureNotificationConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSString* _classificationName;
	NSURL* _classificationURL;
	NSString* _localizedExposureDetailBody;
	NSString* _localizedNotificationSubject;
	NSString* _localizedNotificationBody;

}

@property (nonatomic,copy,readonly) NSString * classificationName;                        //@synthesize classificationName=_classificationName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * classificationURL;                            //@synthesize classificationURL=_classificationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedExposureDetailBody;               //@synthesize localizedExposureDetailBody=_localizedExposureDetailBody - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedNotificationSubject;              //@synthesize localizedNotificationSubject=_localizedNotificationSubject - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedNotificationBody;                 //@synthesize localizedNotificationBody=_localizedNotificationBody - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)getNotificationConfiguration:(id*)arg1 fromDictionary:(id)arg2 locale:(id)arg3 index:(unsigned char)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedNotificationBody;
-(NSString *)classificationName;
-(NSURL *)classificationURL;
-(NSString *)localizedExposureDetailBody;
-(NSString *)localizedNotificationSubject;
@end

