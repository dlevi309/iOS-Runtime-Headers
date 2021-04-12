/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, INDateComponentsRange;

@interface INMediaSearch : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	long long _mediaType;
	long long _sortOrder;
	NSString* _mediaName;
	NSString* _artistName;
	NSString* _albumName;
	NSArray* _genreNames;
	NSArray* _moodNames;
	INDateComponentsRange* _releaseDate;
	long long _reference;
	NSString* _mediaIdentifier;

}

@property (nonatomic,copy,readonly) NSArray * activityNames; 
@property (nonatomic,readonly) long long mediaType;                                   //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) long long sortOrder;                                   //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaName;                             //@synthesize mediaName=_mediaName - In the implementation block
@property (nonatomic,copy,readonly) NSString * artistName;                            //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy,readonly) NSString * albumName;                             //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * genreNames;                             //@synthesize genreNames=_genreNames - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moodNames;                              //@synthesize moodNames=_moodNames - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * releaseDate;              //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,readonly) long long reference;                                   //@synthesize reference=_reference - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaIdentifier;                       //@synthesize mediaIdentifier=_mediaIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(long long)sortOrder;
-(INDateComponentsRange *)releaseDate;
-(NSString *)albumName;
-(id)initWithMediaType:(long long)arg1 sortOrder:(long long)arg2 mediaName:(id)arg3 artistName:(id)arg4 albumName:(id)arg5 genreNames:(id)arg6 moodNames:(id)arg7 releaseDate:(id)arg8 reference:(long long)arg9 mediaIdentifier:(id)arg10 ;
-(NSArray *)genreNames;
-(long long)reference;
-(long long)mediaType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSArray *)activityNames;
-(NSString *)artistName;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(NSString *)mediaName;
-(NSArray *)moodNames;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)mediaIdentifier;
@end

