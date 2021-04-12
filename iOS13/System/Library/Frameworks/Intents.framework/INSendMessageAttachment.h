/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/INEnumerable.h>

@class INFile, NSURL, NSString;

@interface INSendMessageAttachment : NSObject <INJSONSerializable, INEnumerable> {

	BOOL _currentLocation;
	INFile* _file;
	NSURL* _speechDataURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL currentLocation;                    //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,copy,readonly) INFile * file;                      //@synthesize file=_file - In the implementation block
@property (nonatomic,copy,readonly) NSURL * speechDataURL;              //@synthesize speechDataURL=_speechDataURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
+(id)attachmentWithCurrentLocation;
+(id)attachmentWithFile:(id)arg1 ;
+(id)attachmentWithSpeechDataURL:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INFile *)file;
-(id)_dictionaryRepresentation;
-(BOOL)currentLocation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(NSURL *)speechDataURL;
-(id)_initWithCurrentLocation:(BOOL)arg1 file:(id)arg2 speechDataURL:(id)arg3 ;
-(BOOL)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
@end

