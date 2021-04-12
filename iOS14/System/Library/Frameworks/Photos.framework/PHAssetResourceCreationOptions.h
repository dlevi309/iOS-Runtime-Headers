/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface PHAssetResourceCreationOptions : NSObject <NSCopying> {

	BOOL _shouldMoveFile;
	BOOL _shouldIngestInPlace;
	int _burstPickType;
	NSDate* _alternateImportImageDate;
	NSString* _originalFilename;
	NSString* _uniformTypeIdentifier;
	NSString* _forcePairingIdentifier;

}

@property (nonatomic,retain) NSDate * alternateImportImageDate;              //@synthesize alternateImportImageDate=_alternateImportImageDate - In the implementation block
@property (assign,nonatomic) BOOL shouldIngestInPlace;                       //@synthesize shouldIngestInPlace=_shouldIngestInPlace - In the implementation block
@property (assign,nonatomic) int burstPickType;                              //@synthesize burstPickType=_burstPickType - In the implementation block
@property (nonatomic,retain) NSString * forcePairingIdentifier;              //@synthesize forcePairingIdentifier=_forcePairingIdentifier - In the implementation block
@property (nonatomic,copy) NSString * originalFilename;                      //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,copy) NSString * uniformTypeIdentifier;                 //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldMoveFile;                            //@synthesize shouldMoveFile=_shouldMoveFile - In the implementation block
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(NSDate *)alternateImportImageDate;
-(id)propertyListRepresentation;
-(NSString *)uniformTypeIdentifier;
-(void)setBurstPickType:(int)arg1 ;
-(void)setOriginalFilename:(NSString *)arg1 ;
-(BOOL)shouldMoveFile;
-(void)setShouldMoveFile:(BOOL)arg1 ;
-(BOOL)shouldIngestInPlace;
-(void)setShouldIngestInPlace:(BOOL)arg1 ;
-(void)setForcePairingIdentifier:(NSString *)arg1 ;
-(void)setAlternateImportImageDate:(NSDate *)arg1 ;
-(void)setUniformTypeIdentifier:(NSString *)arg1 ;
-(NSString *)forcePairingIdentifier;
-(NSString *)originalFilename;
-(int)burstPickType;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

