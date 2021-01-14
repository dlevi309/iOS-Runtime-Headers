/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber, EDAMLazyMap;

@interface EDAMResourceAttributes : FATObject {

	NSString* _sourceURL;
	NSNumber* _timestamp;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _altitude;
	NSString* _cameraMake;
	NSString* _cameraModel;
	NSNumber* _clientWillIndex;
	NSString* _recoType;
	NSString* _fileName;
	NSNumber* _attachment;
	EDAMLazyMap* _applicationData;

}

@property (nonatomic,retain) NSString * sourceURL;                       //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,retain) NSNumber * timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSNumber * latitude;                        //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSNumber * longitude;                       //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) NSNumber * altitude;                        //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,retain) NSString * cameraMake;                      //@synthesize cameraMake=_cameraMake - In the implementation block
@property (nonatomic,retain) NSString * cameraModel;                     //@synthesize cameraModel=_cameraModel - In the implementation block
@property (nonatomic,retain) NSNumber * clientWillIndex;                 //@synthesize clientWillIndex=_clientWillIndex - In the implementation block
@property (nonatomic,retain) NSString * recoType;                        //@synthesize recoType=_recoType - In the implementation block
@property (nonatomic,retain) NSString * fileName;                        //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSNumber * attachment;                      //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,retain) EDAMLazyMap * applicationData;              //@synthesize applicationData=_applicationData - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setSourceURL:(NSString *)arg1 ;
-(NSNumber *)latitude;
-(void)setAltitude:(NSNumber *)arg1 ;
-(NSString *)sourceURL;
-(NSNumber *)altitude;
-(void)setCameraModel:(NSString *)arg1 ;
-(void)setCameraMake:(NSString *)arg1 ;
-(void)setFileName:(NSString *)arg1 ;
-(NSNumber *)timestamp;
-(NSNumber *)longitude;
-(void)setLongitude:(NSNumber *)arg1 ;
-(void)setApplicationData:(EDAMLazyMap *)arg1 ;
-(NSString *)fileName;
-(void)setLatitude:(NSNumber *)arg1 ;
-(NSString *)cameraMake;
-(NSNumber *)attachment;
-(EDAMLazyMap *)applicationData;
-(NSString *)cameraModel;
-(void)setAttachment:(NSNumber *)arg1 ;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(NSNumber *)clientWillIndex;
-(void)setClientWillIndex:(NSNumber *)arg1 ;
-(NSString *)recoType;
-(void)setRecoType:(NSString *)arg1 ;
@end

