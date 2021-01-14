/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <libobjc.A.dylib/IPAAutoSettings.h>
@class NSString;


@protocol IPAAutoSettings <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL pending; 
@required
-(BOOL)pending;
-(NSString *)identifier;
-(id)archiveDictionary;
-(BOOL)applyArchiveDictionary:(id)arg1;

@end


@class NSString;

@interface IPAAutoSettings : NSObject <IPAAutoSettings> {

	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL pending; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pendingWithIdentifier:(id)arg1 ;
-(id)init;
-(NSString *)debugDescription;
-(NSString *)description;
-(BOOL)pending;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)archiveDictionary;
-(BOOL)_applyArchiveDictionary:(id)arg1 ;
-(BOOL)applyArchiveDictionary:(id)arg1 ;
-(void)_archiveIntoDictionary:(id)arg1 ;
-(BOOL)isEqualToAutoSettings:(id)arg1 ;
@end

