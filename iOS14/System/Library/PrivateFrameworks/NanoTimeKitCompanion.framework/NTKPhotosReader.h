/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol NTKPhotosReaderDelegate;
@class NSString;

@interface NTKPhotosReader : NSObject <NSFastEnumeration> {

	NSString* _resourceDirectory;
	id<NTKPhotosReaderDelegate> _delegate;
	NSString* _assetCollectionIdentifier;
	unsigned long long _mutationCount;

}

@property (nonatomic,retain) NSString * assetCollectionIdentifier;                     //@synthesize assetCollectionIdentifier=_assetCollectionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long mutationCount;                         //@synthesize mutationCount=_mutationCount - In the implementation block
@property (nonatomic,readonly) NSString * resourceDirectory;                           //@synthesize resourceDirectory=_resourceDirectory - In the implementation block
@property (assign,nonatomic,__weak) id<NTKPhotosReaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(id)readerForResourceDirectory:(id)arg1 ;
+(id)readerForSyncedAlbumWithResourceDirectory:(id)arg1 ;
+(id)readerForMemoriesWithResourceDirectory:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NT27*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id<NTKPhotosReaderDelegate>)delegate;
-(unsigned long long)count;
-(id)lastObject;
-(id)firstObject;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(id<NTKPhotosReaderDelegate>)arg1 ;
-(NSString *)resourceDirectory;
-(NSString *)assetCollectionIdentifier;
-(id)initWithResourceDirectory:(id)arg1 ;
-(void)setAssetCollectionIdentifier:(NSString *)arg1 ;
-(unsigned long long)mutationCount;
-(void)setMutationCount:(unsigned long long)arg1 ;
@end

