/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <Foundation/NSItemProvider.h>

@class NSDictionary, NSString, NSDate, NSNumber;

@interface UIItemProvider : NSItemProvider {

	NSDictionary* _teamMetadata;

}

@property (nonatomic,copy) NSDictionary * teamMetadata;                  //@synthesize teamMetadata=_teamMetadata - In the implementation block
@property (assign,nonatomic) CGSize estimatedDisplayedSize; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSDate * modificationDate; 
@property (nonatomic,copy) NSNumber * size; 
-(NSDate *)modificationDate;
-(void)copyFileRepresentationForTypeIdentifier:(id)arg1 toURL:(id)arg2 options:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 options:(id)arg3 loadHandler:(/*^block*/id)arg4 ;
-(void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 loadHandler:(/*^block*/id)arg3 ;
-(NSNumber *)size;
-(id)loadObjectOfClass:(Class)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setTeamMetadata:(NSDictionary *)arg1 ;
-(id)initWithPBItem:(id)arg1 secureRetryHandler:(/*^block*/id)arg2 ;
-(BOOL)canCreateObjectOfClass:(Class)arg1 ;
-(id)copyDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)copyDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)copyFileRepresentationForTypeIdentifier:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)instantiateObjectOfClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)registerObject:(id)arg1 options:(id)arg2 ;
-(void)instantiateObjectOfClass:(Class)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)registerDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 loadHandler:(/*^block*/id)arg3 ;
-(void)registerDataRepresentationForTypeIdentifier:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(id)copyDataRepresentationForTypeIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)copyDataRepresentationForTypeIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)copyFileRepresentationForTypeIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)copyFileRepresentationForTypeIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 inPlace:(BOOL*)arg2 error:(id*)arg3 ;
-(id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)registerObjectOfClass:(Class)arg1 options:(id)arg2 loadHandler:(/*^block*/id)arg3 ;
-(CGSize)estimatedDisplayedSize;
-(BOOL)canInstantiateObjectOfClass:(Class)arg1 ;
-(id)createObjectOfClass:(Class)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)createObjectOfClass:(Class)arg1 error:(id*)arg2 ;
-(void)setEstimatedDisplayedSize:(CGSize)arg1 ;
-(NSDictionary *)teamMetadata;
-(NSString *)name;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithPBItem:(id)arg1 ;
@end

