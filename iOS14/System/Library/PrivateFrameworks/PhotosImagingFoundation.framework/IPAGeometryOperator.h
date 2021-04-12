/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <libobjc.A.dylib/IPAGeometryOperator.h>

@protocol IPAGeometryOperator <NSObject>
@required
-(id)identifier;
-(id)transformForGeometry:(id)arg1;

@end


@class NSString;

@interface IPAGeometryOperator : NSObject <IPAGeometryOperator> {

	NSString* _identifer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)transformForGeometry:(id)arg1 ;
@end

