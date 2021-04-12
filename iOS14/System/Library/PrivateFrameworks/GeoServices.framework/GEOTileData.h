/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeToXPCDictionary:(id)arg1 ;
-(unsigned long long)length;
-(id)initWithData:(id)arg1 ;
-(NSURL *)fileURL;
-(id)decodedRepresentation;
-(id)initWithFileURL:(id)arg1 ;
-(NSData *)data;
-(void)_replaceFileURL:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithDecodedRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

