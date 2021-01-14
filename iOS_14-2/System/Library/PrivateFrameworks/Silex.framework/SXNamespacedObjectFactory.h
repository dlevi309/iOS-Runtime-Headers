/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXNamespacedObjectFactory.h>

@protocol SXNamespacedObjectFactory <NSObject>
@required
-(void)createNamespacedComponentStylesReferencesForComponent:(id)arg1 DOM:(id)arg2;
-(id)createNamespacedReferenceForComponentStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
-(void)createNamespacedComponentTextStylesReferencesForComponent:(id)arg1 DOM:(id)arg2;
-(id)createNamespacedReferenceForComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
-(void)createNamespacedTextStylesReferencesForComponent:(id)arg1 DOM:(id)arg2;
-(id)createNamespacedReferenceForTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;

@end


@class NSString;

@interface SXNamespacedObjectFactory : NSObject <SXNamespacedObjectFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)createNamespacedComponentStylesReferencesForComponent:(id)arg1 DOM:(id)arg2 ;
-(id)createNamespacedReferenceForComponentStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 ;
-(void)createNamespacedComponentTextStylesReferencesForComponent:(id)arg1 DOM:(id)arg2 ;
-(id)createNamespacedReferenceForComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 ;
-(void)createNamespacedTextStylesReferencesForComponent:(id)arg1 DOM:(id)arg2 ;
-(id)createNamespacedReferenceForTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 ;
@end

