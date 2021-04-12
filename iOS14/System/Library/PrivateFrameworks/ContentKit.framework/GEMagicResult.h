/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@class NSString, NSArray;

@interface GEMagicResult : NSObject {

	NSString* mimeType;
	NSString* description;
	NSString* uniformType;
	NSArray* uniformTypeHierarchy;

}

@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,copy,readonly) NSString * description; 
@property (nonatomic,copy,readonly) NSString * uniformType; 
@property (nonatomic,copy,readonly) NSArray * uniformTypeHierarchy; 
-(NSString *)mimeType;
-(NSString *)description;
-(NSString *)uniformType;
-(void)dealloc;
-(NSArray *)uniformTypeHierarchy;
-(id)initWithMimeType:(id)arg1 description:(id)arg2 typeHierarchy:(id)arg3 ;
@end

