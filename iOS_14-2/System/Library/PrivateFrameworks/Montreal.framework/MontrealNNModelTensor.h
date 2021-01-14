/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/Montreal-Structs.h>
#import <Montreal/MontrealNNDescription.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <Montreal/MontrealNNDescriptionProtocol.h>

@class NSString, NSArray, NSHashTable;

@interface MontrealNNModelTensor : MontrealNNDescription <NSCopying, MontrealNNDescriptionProtocol> {

	NSString* _name;
	NSArray* _dimension;
	NSHashTable* _asInput;
	NSHashTable* _asOutput;

}

@property (readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (readonly) NSArray * dimension;                           //@synthesize dimension=_dimension - In the implementation block
@property (readonly) NSHashTable * asInput;                         //@synthesize asInput=_asInput - In the implementation block
@property (readonly) NSHashTable * asOutput;                        //@synthesize asOutput=_asOutput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createInputs:(SCD_Struct_Mo4*)arg1 inputChunks:(id)arg2 nodeName:(id)arg3 ;
+(id)createOutputs:(SCD_Struct_Mo4*)arg1 outputChunks:(id)arg2 nodeName:(id)arg3 ;
-(NSArray *)dimension;
-(NSHashTable *)asInput;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)jsonDescription;
-(NSHashTable *)asOutput;
-(unsigned long long)hash;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)checkForValidity;
-(unsigned long long)tensorSize;
-(id)initWithName:(id)arg1 dimension:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

