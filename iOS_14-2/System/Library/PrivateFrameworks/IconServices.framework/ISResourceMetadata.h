/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <libobjc.A.dylib/ISResourceMetadata.h>
@class NSString, NSNumber;


@protocol ISResourceMetadata <NSObject>
@property (readonly) NSString * name; 
@property (readonly) NSNumber * dimension; 
@property (readonly) NSNumber * scale; 
@property (readonly) BOOL selectedVariant; 
@required
-(NSNumber *)dimension;
-(NSNumber *)scale;
-(BOOL)selectedVariant;
-(NSString *)name;

@end


@class NSString, NSNumber;

@interface ISResourceMetadata : NSObject <ISResourceMetadata> {

	BOOL _selectedVariant;
	NSNumber* _diension;
	NSString* _name;
	NSNumber* _scale;

}

@property (retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (retain) NSNumber * dimension;                            //@synthesize diension=_diension - In the implementation block
@property (retain) NSNumber * scale;                                //@synthesize scale=_scale - In the implementation block
@property (assign) BOOL selectedVariant;                            //@synthesize selectedVariant=_selectedVariant - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metadataWithFileName:(id)arg1 ;
-(NSNumber *)dimension;
-(void)setSelectedVariant:(BOOL)arg1 ;
-(NSNumber *)scale;
-(BOOL)selectedVariant;
-(NSString *)name;
-(void)setScale:(NSNumber *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setDimension:(NSNumber *)arg1 ;
@end

