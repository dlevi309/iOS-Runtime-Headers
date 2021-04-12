/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/_NSItemProviderLoading.h>

@class NSItemProvider, NSDictionary, NSString;

@interface _NSItemProviderCopyingLoadOperator : NSObject <_NSItemProviderLoading> {

	NSItemProvider* _itemProvider;
	NSDictionary* _loadedItems;
	SCD_Struct_NS0 _destinationProcessAuditToken;

}

@property (assign,nonatomic) NSItemProvider * itemProvider;                            //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,retain) NSDictionary * loadedItems;                               //@synthesize loadedItems=_loadedItems - In the implementation block
@property (assign,nonatomic) SCD_Struct_NS0 destinationProcessAuditToken;              //@synthesize destinationProcessAuditToken=_destinationProcessAuditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSItemProvider *)itemProvider;
-(id)initWithItemProvider:(id)arg1 destinationProcessAuditToken:(SCD_Struct_NS0)arg2 ;
-(void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 expectedValueClass:(Class)arg3 options:(id)arg4 ;
-(void)loadPreviewImageWithCompletionHandler:(/*^block*/id)arg1 expectedValueClass:(Class)arg2 options:(id)arg3 ;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(void)setDestinationProcessAuditToken:(SCD_Struct_NS0)arg1 ;
-(void)setLoadedItems:(NSDictionary *)arg1 ;
-(id)_loadItemsForTypeIdentifiers:(id)arg1 auditToken:(SCD_Struct_NS0)arg2 itemProvider:(id)arg3 ;
-(NSDictionary *)loadedItems;
-(id)_sandboxedResourceForItemIfNeeded:(id)arg1 auditToken:(SCD_Struct_NS0)arg2 error:(id*)arg3 ;
-(SCD_Struct_NS0)destinationProcessAuditToken;
@end

