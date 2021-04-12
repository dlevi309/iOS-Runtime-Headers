/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLUniformTypeIdentifierIdentity.h>

@class NSString;

@interface PLSharedStreamsUniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity> {

	BOOL _conformsToRawImage;
	BOOL _conformsToImage;
	BOOL _conformsToMovie;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL conformsToRawImage;                                            //@synthesize conformsToRawImage=_conformsToRawImage - In the implementation block
@property (assign,nonatomic) BOOL conformsToImage;                                               //@synthesize conformsToImage=_conformsToImage - In the implementation block
@property (assign,nonatomic) BOOL conformsToMovie;                                               //@synthesize conformsToMovie=_conformsToMovie - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPrimaryImageFormat,nonatomic,readonly) BOOL primaryImageFormat; 
@property (nonatomic,readonly) BOOL isPlayableVideo; 
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)conformsToMovie;
-(BOOL)conformsToImage;
-(BOOL)isPlayableVideo;
-(BOOL)isPrimaryImageFormat;
-(BOOL)conformsToRawImage;
-(void)setConformsToRawImage:(BOOL)arg1 ;
-(void)setConformsToImage:(BOOL)arg1 ;
-(void)setConformsToMovie:(BOOL)arg1 ;
@end

