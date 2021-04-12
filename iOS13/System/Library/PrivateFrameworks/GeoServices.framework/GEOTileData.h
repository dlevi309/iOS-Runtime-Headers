/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOXPCSerializable.h>

@class NSData, NSURL, NSString;

@interface GEOTileData : NSObject <GEOXPCSerializable> {

	NSData* _data;
	NSURL* _fileURL;
	unsigned long long _cachedFileSize;
	long long _sandboxExtension;
	id _decodedRepresentation;

}

@property (nonatomic,readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                        //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) id decodedRepresentation;               //@synthesize decodedRepresentation=_decodedRepresentation - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(NSURL *)fileURL;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(id)initWithDecodedRepresentation:(id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(id)decodedRepresentation;
@end

