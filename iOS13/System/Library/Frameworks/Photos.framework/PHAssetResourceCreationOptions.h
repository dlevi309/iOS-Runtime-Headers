/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,retain) NSDate * alternateImportImageDate;              //@synthesize alternateImportImageDate=_alternateImportImageDate - In the implementation block
@property (assign,nonatomic) BOOL shouldIngestInPlace;                       //@synthesize shouldIngestInPlace=_shouldIngestInPlace - In the implementation block
@property (assign,nonatomic) int burstPickType;                              //@synthesize burstPickType=_burstPickType - In the implementation block
@property (nonatomic,copy) NSString * originalFilename;                      //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,copy) NSString * uniformTypeIdentifier;                 //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldMoveFile;                            //@synthesize shouldMoveFile=_shouldMoveFile - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOriginalFilename:(NSString *)arg1 ;
-(NSString *)originalFilename;
-(NSString *)uniformTypeIdentifier;
-(void)setUniformTypeIdentifier:(NSString *)arg1 ;
-(void)setAlternateImportImageDate:(NSDate *)arg1 ;
-(id)propertyListRepresentation;
-(NSDate *)alternateImportImageDate;
-(int)burstPickType;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(void)setBurstPickType:(int)arg1 ;
-(BOOL)shouldMoveFile;
-(void)setShouldMoveFile:(BOOL)arg1 ;
-(BOOL)shouldIngestInPlace;
-(void)setShouldIngestInPlace:(BOOL)arg1 ;
@end

