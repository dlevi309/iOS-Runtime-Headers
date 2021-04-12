/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(NSString *)mimeType;
-(NSString *)uniformType;
-(NSArray *)uniformTypeHierarchy;
-(id)initWithMimeType:(id)arg1 description:(id)arg2 typeHierarchy:(id)arg3 ;
@end

