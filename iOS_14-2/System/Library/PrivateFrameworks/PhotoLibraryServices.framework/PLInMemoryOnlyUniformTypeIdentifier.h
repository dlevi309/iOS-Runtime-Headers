/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLUniformTypeIdentifierIdentity.h>

@class NSString;

@interface PLInMemoryOnlyUniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity> {

	NSString* _identifier;

}

@property (nonatomic,copy) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL conformsToRawImage; 
@property (nonatomic,readonly) BOOL conformsToImage; 
@property (nonatomic,readonly) BOOL conformsToMovie; 
@property (getter=isPrimaryImageFormat,nonatomic,readonly) BOOL primaryImageFormat; 
@property (nonatomic,readonly) BOOL isPlayableVideo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPlayableVideo;
-(BOOL)conformsToImage;
-(BOOL)isPrimaryImageFormat;
-(BOOL)conformsToAudio;
-(BOOL)conformsToRawImage;
-(BOOL)conformsToJPEG;
-(BOOL)conformsToMovie;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

