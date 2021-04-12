/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSData, NSString;

@interface DEUpdaterState : NSObject {

	BOOL _disabled;
	NSData* _builtinVersion;
	NSData* _syncedVersion;
	NSString* _publicationId;

}

@property (nonatomic,retain) NSData * builtinVersion;               //@synthesize builtinVersion=_builtinVersion - In the implementation block
@property (nonatomic,retain) NSData * syncedVersion;                //@synthesize syncedVersion=_syncedVersion - In the implementation block
@property (nonatomic,retain) NSString * publicationId;              //@synthesize publicationId=_publicationId - In the implementation block
@property (assign,nonatomic) BOOL disabled;                         //@synthesize disabled=_disabled - In the implementation block
+(id)stateFromPb:(const State*)arg1 ;
+(void)stateToPb:(id)arg1 statePb:(State*)arg2 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(NSData *)builtinVersion;
-(void)setBuiltinVersion:(NSData *)arg1 ;
-(void)setSyncedVersion:(NSData *)arg1 ;
-(NSData *)syncedVersion;
-(NSString *)publicationId;
-(void)setPublicationId:(NSString *)arg1 ;
@end

