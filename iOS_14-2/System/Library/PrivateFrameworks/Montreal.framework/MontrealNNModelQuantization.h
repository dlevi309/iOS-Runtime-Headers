/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/MontrealNNDescription.h>
#import <Montreal/MontrealNNDescriptionProtocol.h>

@class NSString, NSNumber;

@interface MontrealNNModelQuantization : MontrealNNDescription <MontrealNNDescriptionProtocol> {

	NSString* _weightStorage;
	NSNumber* _weightStorageRange;

}

@property (readonly) NSString * weightStorage;                      //@synthesize weightStorage=_weightStorage - In the implementation block
@property (readonly) NSNumber * weightStorageRange;                 //@synthesize weightStorageRange=_weightStorageRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)weightStorage;
-(NSNumber *)weightStorageRange;
@end

